#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashBiddingData.hpp"
#include "LolClashRosterMemberState.hpp"
#include "Position.hpp"
namespace leagueapi {
  struct LolClashRosterMember_t {
    uint64_t replacedSummonerId;
    bool isSubbedOut;
    LolClashRosterMemberState_t state;
    bool isSubstitute;
    LolClashBiddingData_t biddingData;
    uint64_t summonerId;
    Position_t position;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember_t& v) {
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["isSubbedOut"] = v.isSubbedOut;
    j["state"] = v.state;
    j["isSubstitute"] = v.isSubstitute;
    j["biddingData"] = v.biddingData;
    j["summonerId"] = v.summonerId;
    j["position"] = v.position;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember_t& v) {
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>();
    v.isSubbedOut = j.at("isSubbedOut").get<bool>();
    v.state = j.at("state").get<LolClashRosterMemberState_t>();
    v.isSubstitute = j.at("isSubstitute").get<bool>();
    v.biddingData = j.at("biddingData").get<LolClashBiddingData_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.position = j.at("position").get<Position_t>();
  }
}
