#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRune.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRunePage_t {
    bool current;
    uint32_t id;
    std::string name;
    std::vector<LolCollectionsCollectionsRune_t> runes;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRunePage_t& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["name"] = v.name;
    j["runes"] = v.runes;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRunePage_t& v) {
    v.current = j.at("current").get<bool>();
    v.id = j.at("id").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune_t>>();
  }
}
