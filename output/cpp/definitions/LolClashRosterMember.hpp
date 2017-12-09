#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterMemberState.hpp"
#include "LolClashBiddingData.hpp"
#include "Position.hpp"
namespace leagueapi {
  struct LolClashRosterMember_t {
    LolClashBiddingData_t biddingData;
    bool isSubstitute;
    uint64_t summonerId;
    Position_t position;
    LolClashRosterMemberState_t state;
    bool isSubbedOut;
    uint64_t replacedSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember_t& v) {
    j["biddingData"] = v.biddingData;
    j["isSubstitute"] = v.isSubstitute;
    j["summonerId"] = v.summonerId;
    j["position"] = v.position;
    j["state"] = v.state;
    j["isSubbedOut"] = v.isSubbedOut;
    j["replacedSummonerId"] = v.replacedSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember_t& v) {
    v.biddingData = j.at("biddingData").get<LolClashBiddingData_t>();
    v.isSubstitute = j.at("isSubstitute").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.position = j.at("position").get<Position_t>();
    v.state = j.at("state").get<LolClashRosterMemberState_t>();
    v.isSubbedOut = j.at("isSubbedOut").get<bool>();
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashRosterMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
