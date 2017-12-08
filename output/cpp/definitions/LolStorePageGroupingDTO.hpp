#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreItemKey.hpp"
namespace leagueapi {
  struct LolStorePageGroupingDTO_t {
    bool_t grouped;
    bool_t hidden;
    std::vector<LolStoreItemKey_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolStorePageGroupingDTO_t& v) {
    j["grouped"] = v.grouped;
    j["hidden"] = v.hidden;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolStorePageGroupingDTO_t& v) {
    v.grouped = j.at("grouped").get<bool_t>();
    v.hidden = j.at("hidden").get<bool_t>();
    v.items = j.at("items").get<std::vector<LolStoreItemKey_t>>();
  }
  inline std::string to_string(const LolStorePageGroupingDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
