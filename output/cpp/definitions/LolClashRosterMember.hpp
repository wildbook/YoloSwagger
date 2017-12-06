#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
#include "LolClashBiddingData.hpp"
#include "LolClashRosterMemberState.hpp"
namespace leagueapi {
  struct LolClashRosterMember_t {
    LolClashBiddingData_t biddingData;
    bool isSubbedOut;
    bool isSubstitute;
    Position_t position;
    uint64_t replacedSummonerId;
    LolClashRosterMemberState_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember_t& v) {
    j["biddingData"] = v.biddingData;
    j["isSubbedOut"] = v.isSubbedOut;
    j["isSubstitute"] = v.isSubstitute;
    j["position"] = v.position;
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember_t& v) {
    v.biddingData = j.at("biddingData").get<LolClashBiddingData_t>();
    v.isSubbedOut = j.at("isSubbedOut").get<bool>();
    v.isSubstitute = j.at("isSubstitute").get<bool>();
    v.position = j.at("position").get<Position_t>();
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>();
    v.state = j.at("state").get<LolClashRosterMemberState_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
