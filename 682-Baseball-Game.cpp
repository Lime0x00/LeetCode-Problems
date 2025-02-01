
class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::vector<int> score;

        for (const std::string& operation : operations) {
            if (isdigit(operation[0]) ||
                (operation.size() > 1 && operation[0] == '-')) {
                score.push_back(std::stoi(operation));
            } else if (operation == "+") {
                if (score.size() >= 2) {
                    score.push_back(score[score.size() - 1] +
                                    score[score.size() - 2]);
                }
            } else if (operation == "D") {
                if (!score.empty()) {
                    score.push_back(2 * score.back());
                }
            } else if (operation == "C") {
                if (!score.empty()) {
                    score.pop_back();
                }
            }
        }

        int totalScore = 0;
        for (int s : score) {
            totalScore += s;
        }
        return totalScore;
    }
};