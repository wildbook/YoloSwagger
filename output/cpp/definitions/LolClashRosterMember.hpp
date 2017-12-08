#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashBiddingData.hpp"
#include "LolClashRosterMemberState.hpp"
#include "Position.hpp"
namespace leagueapi {
  struct LolClashRosterMember_t {
    bool_t isSubstitute;
    LolClashBiddingData_t biddingData;
    bool_t isSubbedOut;
    LolClashRosterMemberState_t state;
    uint64_t_t replacedSummonerId;
    Position_t position;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember_t& v) {
    j["isSubstitute"] = v.isSubstitute;
    j["biddingData"] = v.biddingData;
    j["isSubbedOut"] = v.isSubbedOut;
    j["state"] = v.state;
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["position"] = v.position;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember_t& v) {
    v.isSubstitute = j.at("isSubstitute").get<bool_t>();
    v.biddingData = j.at("biddingData").get<LolClashBiddingData_t>();
    v.isSubbedOut = j.at("isSubbedOut").get<bool_t>();
    v.state = j.at("state").get<LolClashRosterMemberState_t>();
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t_t>();
    v.position = j.at("position").get<Position_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolClashRosterMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
