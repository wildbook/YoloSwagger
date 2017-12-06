#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreItemKey.hpp"
namespace leagueapi {
  struct LolStorePageGroupingDTO_t {
    bool grouped;
    bool hidden;
    std::vector<LolStoreItemKey_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolStorePageGroupingDTO_t& v) {
    j["grouped"] = v.grouped;
    j["hidden"] = v.hidden;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolStorePageGroupingDTO_t& v) {
    v.grouped = j.at("grouped").get<bool>();
    v.hidden = j.at("hidden").get<bool>();
    v.items = j.at("items").get<std::vector<LolStoreItemKey_t>>();
  }
}
