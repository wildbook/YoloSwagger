#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsRental_t {
    uint64_t purchaseDate;
    bool rented;
    int32_t winCountRemaining;
    uint64_t endDate;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRental_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["rented"] = v.rented;
    j["winCountRemaining"] = v.winCountRemaining;
    j["endDate"] = v.endDate;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRental_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.rented = j.at("rented").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRental_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
