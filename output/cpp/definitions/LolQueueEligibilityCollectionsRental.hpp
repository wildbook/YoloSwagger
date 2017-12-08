#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilityCollectionsRental_t {
    bool_t rented;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsRental_t& v) {
    j["rented"] = v.rented;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsRental_t& v) {
    v.rented = j.at("rented").get<bool_t>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsRental_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
