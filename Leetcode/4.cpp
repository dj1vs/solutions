// Aug 09, 2025 20:12

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const size_t total_size = nums1.size() + nums2.size();
        if (total_size == 0) return 0;
        if (total_size == 1) return (nums1.empty() ? nums2.front() : nums1.front());

        size_t lefti = 0, righti = 0, curi = 0;

        const size_t target_ind = (nums1.size() + nums2.size()) / 2;
        std::array<double, 2> found_els;

        while (curi <= target_ind)
        {
            double cur_min = 0;
            if (lefti < nums1.size() && righti < nums2.size())
            {
                if (nums1.at(lefti) < nums2.at(righti))
                {
                    ++lefti;
                    cur_min = nums1.at(lefti - 1);
                }
                else
                {
                    ++righti;
                    cur_min = nums2.at(righti - 1);
                }
            }
            else if (lefti < nums1.size())
            {
                ++lefti;
                cur_min = nums1.at(lefti - 1);
            }
            else 
            {
                ++righti;
                cur_min = nums2.at(righti - 1);
            }
            ++curi;

            if (curi >= target_ind)
            {
                found_els[curi - target_ind] = cur_min;
            }
        }

        if (total_size % 2)
        {
            return found_els[1];
        }


        return (found_els[0] + found_els[1])/2.0;
    }
};