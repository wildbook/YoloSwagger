#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterMemberState.hpp"
#include "Position.hpp"
#include "LolClashBiddingData.hpp"
namespace leagueapi {
  struct LolClashRosterMember_t {
    bool isSubstitute;
    uint64_t replacedSummonerId;
    Position_t position;
    bool isSubbedOut;
    LolClashBiddingData_t biddingData;
    LolClashRosterMemberState_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember_t& v) {
    j["isSubstitute"] = v.isSubstitute;
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["position"] = v.position;
    j["isSubbedOut"] = v.isSubbedOut;
    j["biddingData"] = v.biddingData;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember_t& v) {
    v.isSubstitute = j.at("isSubstitute").get<bool>();
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>();
    v.position = j.at("position").get<Position_t>();
    v.isSubbedOut = j.at("isSubbedOut").get<bool>();
    v.biddingData = j.at("biddingData").get<LolClashBiddingData_t>();
    v.state = j.at("state").get<LolClashRosterMemberState_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashRosterMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
