#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
#include "LolClashBiddingData.hpp"
#include "LolClashRosterMemberState.hpp"
namespace leagueapi {
  struct LolClashRosterMember_t {
    uint64_t summonerId;
    Position_t position;
    bool isSubstitute;
    bool isSubbedOut;
    uint64_t replacedSummonerId;
    LolClashRosterMemberState_t state;
    LolClashBiddingData_t biddingData;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember_t& v) {
    j["summonerId"] = v.summonerId;
    j["position"] = v.position;
    j["isSubstitute"] = v.isSubstitute;
    j["isSubbedOut"] = v.isSubbedOut;
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["state"] = v.state;
    j["biddingData"] = v.biddingData;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.position = j.at("position").get<Position_t>();
    v.isSubstitute = j.at("isSubstitute").get<bool>();
    v.isSubbedOut = j.at("isSubbedOut").get<bool>();
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>();
    v.state = j.at("state").get<LolClashRosterMemberState_t>();
    v.biddingData = j.at("biddingData").get<LolClashBiddingData_t>();
  }
  inline std::string to_string(const LolClashRosterMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
