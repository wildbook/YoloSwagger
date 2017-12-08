#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTQuestionResponse_t {
    uint64_t questionId;
    nlohmann::json responseData;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTQuestionResponse_t& v) {
    j["questionId"] = v.questionId;
    j["responseData"] = v.responseData;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTQuestionResponse_t& v) {
    v.questionId = j.at("questionId").get<uint64_t>();
    v.responseData = j.at("responseData").get<nlohmann::json>();
  }
  inline std::string to_string(const LolPftPFTQuestionResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
