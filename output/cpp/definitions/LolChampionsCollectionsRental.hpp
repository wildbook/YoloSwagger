#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsRental_t {
    int32_t winCountRemaining;
    uint64_t purchaseDate;
    uint64_t endDate;
    bool rented;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsRental_t& v) {
    j["winCountRemaining"] = v.winCountRemaining;
    j["purchaseDate"] = v.purchaseDate;
    j["endDate"] = v.endDate;
    j["rented"] = v.rented;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsRental_t& v) {
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.rented = j.at("rented").get<bool>();
  }
}
