#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsGameDataChampionChroma_t {
    std::vector<std::string> colors;
    std::string chromaPath;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionChroma_t& v) {
    j["colors"] = v.colors;
    j["chromaPath"] = v.chromaPath;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionChroma_t& v) {
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.chromaPath = j.at("chromaPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionChroma_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
