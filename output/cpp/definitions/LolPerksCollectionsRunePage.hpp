#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksCollectionsRune.hpp"
namespace leagueapi {
  struct LolPerksCollectionsRunePage_t {
    std::string name;
    uint32_t id;
    std::vector<LolPerksCollectionsRune_t> runes;
    bool current;
  };

  inline void to_json(nlohmann::json& j, const LolPerksCollectionsRunePage_t& v) {
    j["name"] = v.name;
    j["id"] = v.id;
    j["runes"] = v.runes;
    j["current"] = v.current;
  }

  inline void from_json(const nlohmann::json& j, LolPerksCollectionsRunePage_t& v) {
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint32_t>();
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune_t>>();
    v.current = j.at("current").get<bool>();
  }
  inline std::string to_string(const LolPerksCollectionsRunePage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
