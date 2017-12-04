#ifndef SWAGGER_TYPES_LolBannersInventoryResponse_HPP
#define SWAGGER_TYPES_LolBannersInventoryResponse_HPP
#include <json.hpp>
#include "LolBannersInventoryItemsByType.hpp"
namespace test {
  // 
  struct LolBannersInventoryResponse {
'    // 
    LolBannersInventoryItemsByType items;
  };

  void to_json(nlohmann::json& j, const LolBannersInventoryResponse& v) {
    j["items"] = v.items;
  }

  void from_json(const nlohmann::json& j, LolBannersInventoryResponse& v) {
    v.items = j.at("items").get<LolBannersInventoryItemsByType>;
  }

}
#endif // SWAGGER_TYPES_LolBannersInventoryResponse_HPP
