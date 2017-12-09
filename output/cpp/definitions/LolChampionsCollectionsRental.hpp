#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsRental_t {
    int32_t winCountRemaining;
    bool rented;
    uint64_t endDate;
    uint64_t purchaseDate;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsRental_t& v) {
    j["winCountRemaining"] = v.winCountRemaining;
    j["rented"] = v.rented;
    j["endDate"] = v.endDate;
    j["purchaseDate"] = v.purchaseDate;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsRental_t& v) {
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
    v.rented = j.at("rented").get<bool>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsRental_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
