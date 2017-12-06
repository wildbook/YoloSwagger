#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueStanding_t {
    uint64_t wins;
    uint64_t previousPosition;
    bool inactive;
    int64_t apexDaysUntilDecay;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    int64_t points;
    std::string id;
    uint64_t losses;
    int64_t positionDelta;
    std::string name;
    bool pendingPromotion;
    std::string inactivityStatus;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    bool pendingDemotion;
    uint64_t position;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueStanding_t& v) {
    j["wins"] = v.wins;
    j["previousPosition"] = v.previousPosition;
    j["inactive"] = v.inactive;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["emblems"] = v.emblems;
    j["points"] = v.points;
    j["id"] = v.id;
    j["losses"] = v.losses;
    j["positionDelta"] = v.positionDelta;
    j["name"] = v.name;
    j["pendingPromotion"] = v.pendingPromotion;
    j["inactivityStatus"] = v.inactivityStatus;
    j["miniseriesResults"] = v.miniseriesResults;
    j["pendingDemotion"] = v.pendingDemotion;
    j["position"] = v.position;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueStanding_t& v) {
    v.wins = j.at("wins").get<uint64_t>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.points = j.at("points").get<int64_t>();
    v.id = j.at("id").get<std::string>();
    v.losses = j.at("losses").get<uint64_t>();
    v.positionDelta = j.at("positionDelta").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.pendingPromotion = j.at("pendingPromotion").get<bool>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.pendingDemotion = j.at("pendingDemotion").get<bool>();
    v.position = j.at("position").get<uint64_t>();
  }
}
