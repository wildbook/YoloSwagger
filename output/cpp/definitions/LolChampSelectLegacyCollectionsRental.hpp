#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyCollectionsRental_t {
    bool_t rented;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsRental_t& v) {
    j["rented"] = v.rented;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsRental_t& v) {
    v.rented = j.at("rented").get<bool_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyCollectionsRental_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
