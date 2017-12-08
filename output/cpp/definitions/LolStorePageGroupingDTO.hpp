#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreItemKey.hpp"
namespace leagueapi {
  struct LolStorePageGroupingDTO_t {
    bool hidden;
    bool grouped;
    std::vector<LolStoreItemKey_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolStorePageGroupingDTO_t& v) {
    j["hidden"] = v.hidden;
    j["grouped"] = v.grouped;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolStorePageGroupingDTO_t& v) {
    v.hidden = j.at("hidden").get<bool>();
    v.grouped = j.at("grouped").get<bool>();
    v.items = j.at("items").get<std::vector<LolStoreItemKey_t>>();
  }
  inline std::string to_string(const LolStorePageGroupingDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
