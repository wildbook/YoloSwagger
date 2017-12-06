#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRune.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRunePage_t {
    bool current;
    std::string name;
    uint32_t id;
    std::vector<LolCollectionsCollectionsRune_t> runes;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRunePage_t& v) {
    j["current"] = v.current;
    j["name"] = v.name;
    j["id"] = v.id;
    j["runes"] = v.runes;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRunePage_t& v) {
    v.current = j.at("current").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint32_t>();
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune_t>>();
  }
}
