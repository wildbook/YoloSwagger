#pragma once
#include <json.hpp>
#include <optional>
#include "LolBannersInventoryItemsByType.hpp"
namespace leagueapi {
  struct LolBannersInventoryResponse_t {
    LolBannersInventoryItemsByType_t items;
  };

  inline void to_json(nlohmann::json& j, const LolBannersInventoryResponse_t& v) {
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolBannersInventoryResponse_t& v) {
    v.items = j.at("items").get<LolBannersInventoryItemsByType_t>();
  }
}
