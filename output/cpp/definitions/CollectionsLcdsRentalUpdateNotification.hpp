#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsRentalUpdateNotification_t {
    std::string inventoryType;
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsRentalUpdateNotification_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsRentalUpdateNotification_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.data = j.at("data").get<nlohmann::json>();
  }
  inline std::string to_string(const CollectionsLcdsRentalUpdateNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
