#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsRental_t {
    uint64_t endDate;
    uint64_t purchaseDate;
    bool rented;
    int32_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRental_t& v) {
    j["endDate"] = v.endDate;
    j["purchaseDate"] = v.purchaseDate;
    j["rented"] = v.rented;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRental_t& v) {
    v.endDate = j.at("endDate").get<uint64_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.rented = j.at("rented").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
  }
}
