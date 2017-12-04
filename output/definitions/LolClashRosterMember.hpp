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
    LolClashBiddingData biddingData;
    // 
    bool isSubbedOut;
    // 
    bool isSubstitute;
    // 
    Position position;
    // 
    uint64_t replacedSummonerId;
    // 
    LolClashRosterMemberState state;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMember& v) {
    j["biddingData"] = v.biddingData;
    j["isSubbedOut"] = v.isSubbedOut;
    j["isSubstitute"] = v.isSubstitute;
    j["position"] = v.position;
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMember& v) {
    v.biddingData = j.at("biddingData").get<LolClashBiddingData>;
    v.isSubbedOut = j.at("isSubbedOut").get<bool>;
    v.isSubstitute = j.at("isSubstitute").get<bool>;
    v.position = j.at("position").get<Position>;
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>;
    v.state = j.at("state").get<LolClashRosterMemberState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterMember_HPP
