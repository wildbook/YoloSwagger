#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashBiddingData.hpp"
#include "LolClashRosterMemberState.hpp"
#include "Position.hpp"
namespace leagueapi {
  struct LolClashRosterMember_t {
    LolClashRosterMemberState_t state;
    Position_t position;
    uint64_t summonerId;
    LolClashBiddingData_t biddingData;
    uint64_t replacedSummonerId;
    bool isSubstitute;
    bool isSubbedOut;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember_t& v) {
    j["state"] = v.state;
    j["position"] = v.position;
    j["summonerId"] = v.summonerId;
    j["biddingData"] = v.biddingData;
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["isSubstitute"] = v.isSubstitute;
    j["isSubbedOut"] = v.isSubbedOut;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember_t& v) {
    v.state = j.at("state").get<LolClashRosterMemberState_t>();
    v.position = j.at("position").get<Position_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.biddingData = j.at("biddingData").get<LolClashBiddingData_t>();
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>();
    v.isSubstitute = j.at("isSubstitute").get<bool>();
    v.isSubbedOut = j.at("isSubbedOut").get<bool>();
  }
  inline std::string to_string(const LolClashRosterMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
