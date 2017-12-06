#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Highlight_t {
    uint64_t fileSizeBytes;
    std::string filepath;
    uint64_t id;
    std::string mtimeIso8601;
    uint64_t mtimeMsUtc;
    std::string name;
    std::string url;
  };

  inline void to_json(nlohmann::json& j, const Highlight_t& v) {
    j["fileSizeBytes"] = v.fileSizeBytes;
    j["filepath"] = v.filepath;
    j["id"] = v.id;
    j["mtimeIso8601"] = v.mtimeIso8601;
    j["mtimeMsUtc"] = v.mtimeMsUtc;
    j["name"] = v.name;
    j["url"] = v.url;
  }

  inline void from_json(const nlohmann::json& j, Highlight_t& v) {
    v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>();
    v.filepath = j.at("filepath").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>();
    v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.url = j.at("url").get<std::string>();
  }
}
