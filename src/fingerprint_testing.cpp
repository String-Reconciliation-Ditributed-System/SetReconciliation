#include "fingerprinting.hpp"
#include "IBLT_helpers.hpp"
#include <stdio.h>

template <typename hash_type = uint64_t>
class FingerprintTester {
  public:
	size_t avg_block_size;
	Fingerprinter<hash_type> f;
	keyHandler<hash_type> kh;

	FingerprintTester(size_t avg_block_size): 
		avg_block_size(avg_block_size), f(avg_block_size) {}

	void basicTest(const std::string& filename) {
		std::vector<pair<hash_type, size_t> > hashes;
		size_t file_size = f.get_fingerprint(filename, hashes);
		// for(size_t i = 0; i < hashes.size(); ++i) {
		// 	std::cout << "Hash: " << hashes[i].first << ", Pos: " << hashes[i].second << std::endl;
		// }
		std::cout << "Density is " << (double) hashes.size()/ file_size << "compared to theoretical " << (double) 1.0/avg_block_size << std::endl; 
	}

	// filters out just the first component of the pair<hash_type, size_t>
	void filterHashes( std::vector<pair<hash_type, size_t> >& hashes, std::unordered_set<hash_type>& hash_set) {
		for(auto it = hashes.begin(); it != hashes.end(); ++it) {
			hash_set.insert(it->first);
		}
	}

	// computes the jaccard coefficient of two sets
	void comparisonTest(const std::string& f1, const std::string& f2) {
		std::vector<pair<hash_type, size_t> > hashes1, hashes2;
		std::unordered_set<hash_type> hash_set1, hash_set2, hash_union, hash_intersection;
		f.get_fingerprint(f1, hashes1);
		f.get_fingerprint(f2, hashes2);
		filterHashes(hashes1, hash_set1);
		filterHashes(hashes2, hash_set2);
		// for(size_t i = 0; i < hashes2.size(); ++i) {
		// 	std::cout << "Hash: " << hashes2[i].first << ", Pos: " << hashes2[i].second << std::endl;
		// }
		kh.set_union(hash_set1, hash_set2, hash_union);
		/*for(auto it = hash_set2.begin(); it != hash_set2.end(); ++it) {
			std::cout << "Hash: " << *it << std::endl;
		}*/
		kh.set_intersection(hash_set1, hash_set2, hash_intersection);
		std::cout << "File1 hash size " << hashes1.size() << "File2 hash size " << hashes2.size() << std::endl;
		std::cout << "Intersection is " << hash_intersection.size() << "Union is " << hash_union.size() << std::endl;
		std::cout << "Similarity is" << (double) hash_intersection.size()/ hash_union.size() << std::endl; 
	}

	void fileDigest(const std::string& f1) {
		std::vector<pair<hash_type, size_t> > hashes;
		f.digest_file(f1, hashes);
		// for(size_t i = 0; i < hashes.size(); ++i) {
		// 	std::cout << "Hash: " << hashes[i].first << ", Len: " << hashes[i].second << std::endl;
		// }
	}

	void fileDigestComparison(const std::string& f1, const std::string& f2) {
		std::vector<pair<hash_type, size_t> > hashes1, hashes2;
		std::unordered_set<hash_type> hash_set1, hash_set2, hash_union, hash_intersection;
		f.digest_file(f1, hashes1);
		f.digest_file(f2, hashes2);
		filterHashes(hashes1, hash_set1);
		filterHashes(hashes2, hash_set2);
		kh.set_union(hash_set1, hash_set2, hash_union);
		kh.set_intersection(hash_set1, hash_set2, hash_intersection);
		std::cout << "File1 hash size " << hashes1.size() << "File2 hash size " << hashes2.size() << std::endl;
		std::cout << "Intersection is " << hash_intersection.size() << "Union is " << hash_union.size() << std::endl;
		std::cout << "Similarity is" << (double) hash_intersection.size()/ hash_union.size() << std::endl; 
	}
};


int main() {
	const size_t avg_block_size = 100;
	typedef uint32_t hash_type;
	FingerprintTester<hash_type> ft(avg_block_size);
	const std::string file1 = "tmp.txt";
	const std::string file2 = "tmp2.txt";
	double similarity = 0.999;
	int file_len = 1000000;
	generate_random_file(file1, file_len);
	ft.basicTest(file1);
	generate_similar_file(file1, file2, similarity);
	//ft.basicTest(file2);
	ft.comparisonTest(file1, file2);
	ft.fileDigest(file1);
	ft.fileDigestComparison(file1, file2);
	return 1;
}
