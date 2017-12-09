#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueStanding_t {
    int64_t apexDaysUntilDecay;
    uint64_t previousPosition;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    uint64_t wins;
    int64_t positionDelta;
    bool pendingDemotion;
    int64_t points;
    std::string inactivityStatus;
    uint64_t position;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    std::string id;
    std::string name;
    uint64_t losses;
    bool inactive;
    bool pendingPromotion;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueStanding_t& v) {
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["previousPosition"] = v.previousPosition;
    j["miniseriesResults"] = v.miniseriesResults;
    j["wins"] = v.wins;
    j["positionDelta"] = v.positionDelta;
    j["pendingDemotion"] = v.pendingDemotion;
    j["points"] = v.points;
    j["inactivityStatus"] = v.inactivityStatus;
    j["position"] = v.position;
    j["emblems"] = v.emblems;
    j["id"] = v.id;
    j["name"] = v.name;
    j["losses"] = v.losses;
    j["inactive"] = v.inactive;
    j["pendingPromotion"] = v.pendingPromotion;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueStanding_t& v) {
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.wins = j.at("wins").get<uint64_t>();
    v.positionDelta = j.at("positionDelta").get<int64_t>();
    v.pendingDemotion = j.at("pendingDemotion").get<bool>();
    v.points = j.at("points").get<int64_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.position = j.at("position").get<uint64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.id = j.at("id").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.losses = j.at("losses").get<uint64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.pendingPromotion = j.at("pendingPromotion").get<bool>();
  }
  inline std::string to_string(const LolLeaguesLeagueStanding_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
