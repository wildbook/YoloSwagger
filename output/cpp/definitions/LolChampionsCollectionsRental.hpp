#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsRental_t {
    uint64_t purchaseDate;
    uint64_t endDate;
    bool rented;
    int32_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsRental_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["endDate"] = v.endDate;
    j["rented"] = v.rented;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsRental_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.rented = j.at("rented").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsRental_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
