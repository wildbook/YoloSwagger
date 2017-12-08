#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilityEligibilityQueryParams_t {
    std::vector<int32_t> queueIds;
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityQueryParams_t& v) {
    j["queueIds"] = v.queueIds;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityQueryParams_t& v) {
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolQueueEligibilityEligibilityQueryParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
