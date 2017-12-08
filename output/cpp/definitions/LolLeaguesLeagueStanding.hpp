#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueStanding_t {
    std::string inactivityStatus;
    bool inactive;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    int64_t points;
    uint64_t losses;
    uint64_t wins;
    std::string name;
    bool pendingPromotion;
    int64_t apexDaysUntilDecay;
    uint64_t previousPosition;
    std::string id;
    uint64_t position;
    bool pendingDemotion;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    int64_t positionDelta;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueStanding_t& v) {
    j["inactivityStatus"] = v.inactivityStatus;
    j["inactive"] = v.inactive;
    j["miniseriesResults"] = v.miniseriesResults;
    j["points"] = v.points;
    j["losses"] = v.losses;
    j["wins"] = v.wins;
    j["name"] = v.name;
    j["pendingPromotion"] = v.pendingPromotion;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["previousPosition"] = v.previousPosition;
    j["id"] = v.id;
    j["position"] = v.position;
    j["pendingDemotion"] = v.pendingDemotion;
    j["emblems"] = v.emblems;
    j["positionDelta"] = v.positionDelta;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueStanding_t& v) {
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.inactive = j.at("inactive").get<bool>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.points = j.at("points").get<int64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.pendingPromotion = j.at("pendingPromotion").get<bool>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.id = j.at("id").get<std::string>();
    v.position = j.at("position").get<uint64_t>();
    v.pendingDemotion = j.at("pendingDemotion").get<bool>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.positionDelta = j.at("positionDelta").get<int64_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueStanding_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
