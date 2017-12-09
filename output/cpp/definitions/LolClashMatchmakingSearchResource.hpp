#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashMatchmakingDodgeData.hpp"
namespace leagueapi {
  struct LolClashMatchmakingSearchResource_t {
    LolClashMatchmakingDodgeData_t dodgeData;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingSearchResource_t& v) {
    j["dodgeData"] = v.dodgeData;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingSearchResource_t& v) {
    v.dodgeData = j.at("dodgeData").get<LolClashMatchmakingDodgeData_t>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const LolClashMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
