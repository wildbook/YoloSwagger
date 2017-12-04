#ifndef SWAGGER_TYPES_LolLeaguesLeagueStanding_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueStanding_HPP
#include <json.hpp>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeagueStanding {
    // 
    int64_t apexDaysUntilDecay;
    // 
    std::vector<LolLeaguesLeagueEmblem> emblems;
    // 
    std::string id;
    // 
    bool inactive;
    // 
    std::string inactivityStatus;
    // 
    uint64_t losses;
    // 
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    // 
    std::string name;
    // 
    bool pendingDemotion;
    // 
    bool pendingPromotion;
    // 
    int64_t points;
    // 
    uint64_t position;
    // 
    int64_t positionDelta;
    // 
    uint64_t previousPosition;
    // 
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueStanding& v) {
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["emblems"] = v.emblems;
    j["id"] = v.id;
    j["inactive"] = v.inactive;
    j["inactivityStatus"] = v.inactivityStatus;
    j["losses"] = v.losses;
    j["miniseriesResults"] = v.miniseriesResults;
    j["name"] = v.name;
    j["pendingDemotion"] = v.pendingDemotion;
    j["pendingPromotion"] = v.pendingPromotion;
    j["points"] = v.points;
    j["position"] = v.position;
    j["positionDelta"] = v.positionDelta;
    j["previousPosition"] = v.previousPosition;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueStanding& v) {
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>;
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>;
    v.id = j.at("id").get<std::string>;
    v.inactive = j.at("inactive").get<bool>;
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>;
    v.losses = j.at("losses").get<uint64_t>;
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>;
    v.name = j.at("name").get<std::string>;
    v.pendingDemotion = j.at("pendingDemotion").get<bool>;
    v.pendingPromotion = j.at("pendingPromotion").get<bool>;
    v.points = j.at("points").get<int64_t>;
    v.position = j.at("position").get<uint64_t>;
    v.positionDelta = j.at("positionDelta").get<int64_t>;
    v.previousPosition = j.at("previousPosition").get<uint64_t>;
    v.wins = j.at("wins").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueStanding_HPP
