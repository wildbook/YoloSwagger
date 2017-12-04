#ifndef SWAGGER_TYPES_LolClashRosterMember_HPP
#define SWAGGER_TYPES_LolClashRosterMember_HPP
#include <json.hpp>
#include "LolClashBiddingData.hpp"
#include "LolClashRosterMemberState.hpp"
#include "Position.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterMember {
    // 
    bool isSubstitute;
    // 
    LolClashBiddingData biddingData;
    // 
    bool isSubbedOut;
    // 
    LolClashRosterMemberState state;
    // 
    uint64_t replacedSummonerId;
    // 
    Position position;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember& v) {
    j["isSubstitute"] = v.isSubstitute;
    j["biddingData"] = v.biddingData;
    j["isSubbedOut"] = v.isSubbedOut;
    j["state"] = v.state;
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["position"] = v.position;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember& v) {
    v.isSubstitute = j.at("isSubstitute").get<bool>;
    v.biddingData = j.at("biddingData").get<LolClashBiddingData>;
    v.isSubbedOut = j.at("isSubbedOut").get<bool>;
    v.state = j.at("state").get<LolClashRosterMemberState>;
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>;
    v.position = j.at("position").get<Position>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterMember_HPP
