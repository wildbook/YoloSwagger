#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilityEligibilityQueryParams_t {
    std::vector<uint64_t> summonerIds;
    std::vector<int32_t> queueIds;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityQueryParams_t& v) {
    j["summonerIds"] = v.summonerIds;
    j["queueIds"] = v.queueIds;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityQueryParams_t& v) {
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolQueueEligibilityEligibilityQueryParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
