#ifndef SWAGGER_TYPES_LolBannersInventoryResponse_HPP
#define SWAGGER_TYPES_LolBannersInventoryResponse_HPP
#include <json.hpp>
#include "LolBannersInventoryItemsByType.hpp"
namespace leagueapi {
  // 
  struct LolBannersInventoryResponse {
    // 
    LolBannersInventoryItemsByType items;
  };

  inline void to_json(nlohmann::json& j, const LolBannersInventoryResponse& v) {
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolBannersInventoryResponse& v) {
    v.items = j.at("items").get<LolBannersInventoryItemsByType>;
  }

}
#endif // SWAGGER_TYPES_LolBannersInventoryResponse_HPP