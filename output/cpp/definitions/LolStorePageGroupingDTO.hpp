#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreItemKey.hpp"
namespace leagueapi {
  struct LolStorePageGroupingDTO_t {
    std::vector<LolStoreItemKey_t> items;
    bool grouped;
    bool hidden;
  };

  inline void to_json(nlohmann::json& j, const LolStorePageGroupingDTO_t& v) {
    j["items"] = v.items;
    j["grouped"] = v.grouped;
    j["hidden"] = v.hidden;
  }

  inline void from_json(const nlohmann::json& j, LolStorePageGroupingDTO_t& v) {
    v.items = j.at("items").get<std::vector<LolStoreItemKey_t>>();
    v.grouped = j.at("grouped").get<bool>();
    v.hidden = j.at("hidden").get<bool>();
  }
  inline std::string to_string(const LolStorePageGroupingDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
