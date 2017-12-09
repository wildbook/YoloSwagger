#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueStanding_t {
    uint64_t previousPosition;
    int64_t positionDelta;
    uint64_t position;
    bool pendingPromotion;
    int64_t points;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    uint64_t losses;
    bool inactive;
    std::string name;
    uint64_t wins;
    std::string id;
    bool pendingDemotion;
    int64_t apexDaysUntilDecay;
    std::string inactivityStatus;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueStanding_t& v) {
    j["previousPosition"] = v.previousPosition;
    j["positionDelta"] = v.positionDelta;
    j["position"] = v.position;
    j["pendingPromotion"] = v.pendingPromotion;
    j["points"] = v.points;
    j["emblems"] = v.emblems;
    j["losses"] = v.losses;
    j["inactive"] = v.inactive;
    j["name"] = v.name;
    j["wins"] = v.wins;
    j["id"] = v.id;
    j["pendingDemotion"] = v.pendingDemotion;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["inactivityStatus"] = v.inactivityStatus;
    j["miniseriesResults"] = v.miniseriesResults;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueStanding_t& v) {
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.positionDelta = j.at("positionDelta").get<int64_t>();
    v.position = j.at("position").get<uint64_t>();
    v.pendingPromotion = j.at("pendingPromotion").get<bool>();
    v.points = j.at("points").get<int64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.losses = j.at("losses").get<uint64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.id = j.at("id").get<std::string>();
    v.pendingDemotion = j.at("pendingDemotion").get<bool>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
  }
  inline std::string to_string(const LolLeaguesLeagueStanding_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
