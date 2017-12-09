#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksCollectionsRune.hpp"
namespace leagueapi {
  struct LolPerksCollectionsRunePage_t {
    std::string name;
    bool current;
    std::vector<LolPerksCollectionsRune_t> runes;
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksCollectionsRunePage_t& v) {
    j["name"] = v.name;
    j["current"] = v.current;
    j["runes"] = v.runes;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPerksCollectionsRunePage_t& v) {
    v.name = j.at("name").get<std::string>();
    v.current = j.at("current").get<bool>();
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune_t>>();
    v.id = j.at("id").get<uint32_t>();
  }
  inline std::string to_string(const LolPerksCollectionsRunePage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
