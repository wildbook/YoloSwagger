#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootCollectionsRental_t {
    bool_t rented;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsRental_t& v) {
    j["rented"] = v.rented;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsRental_t& v) {
    v.rented = j.at("rented").get<bool_t>();
  }
  inline std::string to_string(const LolLootCollectionsRental_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
