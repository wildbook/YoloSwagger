#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueStanding_t {
    uint64_t position;
    std::string inactivityStatus;
    bool pendingPromotion;
    uint64_t previousPosition;
    int64_t points;
    int64_t positionDelta;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    bool inactive;
    uint64_t losses;
    int64_t apexDaysUntilDecay;
    std::string name;
    bool pendingDemotion;
    std::string id;
    uint64_t wins;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueStanding_t& v) {
    j["position"] = v.position;
    j["inactivityStatus"] = v.inactivityStatus;
    j["pendingPromotion"] = v.pendingPromotion;
    j["previousPosition"] = v.previousPosition;
    j["points"] = v.points;
    j["positionDelta"] = v.positionDelta;
    j["miniseriesResults"] = v.miniseriesResults;
    j["inactive"] = v.inactive;
    j["losses"] = v.losses;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["name"] = v.name;
    j["pendingDemotion"] = v.pendingDemotion;
    j["id"] = v.id;
    j["wins"] = v.wins;
    j["emblems"] = v.emblems;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueStanding_t& v) {
    v.position = j.at("position").get<uint64_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.pendingPromotion = j.at("pendingPromotion").get<bool>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.points = j.at("points").get<int64_t>();
    v.positionDelta = j.at("positionDelta").get<int64_t>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.inactive = j.at("inactive").get<bool>();
    v.losses = j.at("losses").get<uint64_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.pendingDemotion = j.at("pendingDemotion").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
  }
  inline std::string to_string(const LolLeaguesLeagueStanding_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
