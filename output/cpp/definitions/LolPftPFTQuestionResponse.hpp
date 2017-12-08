#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTQuestionResponse_t {
    nlohmann::json responseData;
    uint64_t questionId;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTQuestionResponse_t& v) {
    j["responseData"] = v.responseData;
    j["questionId"] = v.questionId;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTQuestionResponse_t& v) {
    v.responseData = j.at("responseData").get<nlohmann::json>();
    v.questionId = j.at("questionId").get<uint64_t>();
  }
  inline std::string to_string(const LolPftPFTQuestionResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
