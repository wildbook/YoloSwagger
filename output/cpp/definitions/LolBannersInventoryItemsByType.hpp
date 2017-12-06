#pragma once
#include <json.hpp>
#include <optional>
#include "LolBannersTournamentFlagInventoryItem.hpp"
namespace leagueapi {
  struct LolBannersInventoryItemsByType_t {
    std::vector<LolBannersTournamentFlagInventoryItem_t> TOURNAMENT_FLAG;
  };

  inline void to_json(nlohmann::json& j, const LolBannersInventoryItemsByType_t& v) {
    j["TOURNAMENT_FLAG"] = v.TOURNAMENT_FLAG;
  }

  inline void from_json(const nlohmann::json& j, LolBannersInventoryItemsByType_t& v) {
    v.TOURNAMENT_FLAG = j.at("TOURNAMENT_FLAG").get<std::vector<LolBannersTournamentFlagInventoryItem_t>>();
  }
}
