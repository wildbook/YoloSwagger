#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashMatchmakingDodgeData.hpp"
namespace leagueapi {
  struct LolClashMatchmakingSearchResource_t {
    int32_t_t queueId;
    LolClashMatchmakingDodgeData_t dodgeData;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingSearchResource_t& v) {
    j["queueId"] = v.queueId;
    j["dodgeData"] = v.dodgeData;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingSearchResource_t& v) {
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.dodgeData = j.at("dodgeData").get<LolClashMatchmakingDodgeData_t>();
  }
  inline std::string to_string(const LolClashMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
