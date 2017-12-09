#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsRentalUpdateNotification_t {
    nlohmann::json data;
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsRentalUpdateNotification_t& v) {
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsRentalUpdateNotification_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
  }
  inline std::string to_string(const CollectionsLcdsRentalUpdateNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
