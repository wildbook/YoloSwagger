#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTSurveyV1_t {
    std::string caption;
    uint64_t id;
    std::string title;
    std::string type;
    std::string url;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyV1_t& v) {
    j["caption"] = v.caption;
    j["id"] = v.id;
    j["title"] = v.title;
    j["type"] = v.type;
    j["url"] = v.url;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyV1_t& v) {
    v.caption = j.at("caption").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.title = j.at("title").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.url = j.at("url").get<std::string>();
  }
}
