#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksCollectionsRune.hpp"
namespace leagueapi {
  struct LolPerksCollectionsRunePage_t {
    bool current;
    uint32_t id;
    std::vector<LolPerksCollectionsRune_t> runes;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolPerksCollectionsRunePage_t& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["runes"] = v.runes;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPerksCollectionsRunePage_t& v) {
    v.current = j.at("current").get<bool>();
    v.id = j.at("id").get<uint32_t>();
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune_t>>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolPerksCollectionsRunePage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
