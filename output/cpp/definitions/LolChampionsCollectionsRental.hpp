#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsRental_t {
    bool_t rented;
    uint64_t_t purchaseDate;
    uint64_t_t endDate;
    int32_t_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsRental_t& v) {
    j["rented"] = v.rented;
    j["purchaseDate"] = v.purchaseDate;
    j["endDate"] = v.endDate;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsRental_t& v) {
    v.rented = j.at("rented").get<bool_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t_t>();
    v.endDate = j.at("endDate").get<uint64_t_t>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsRental_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
