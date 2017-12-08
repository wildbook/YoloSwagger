#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Highlight_t {
    std::string url;
    uint64_t id;
    std::string mtimeIso8601;
    std::string filepath;
    uint64_t fileSizeBytes;
    std::string name;
    uint64_t mtimeMsUtc;
  };

  inline void to_json(nlohmann::json& j, const Highlight_t& v) {
    j["url"] = v.url;
    j["id"] = v.id;
    j["mtimeIso8601"] = v.mtimeIso8601;
    j["filepath"] = v.filepath;
    j["fileSizeBytes"] = v.fileSizeBytes;
    j["name"] = v.name;
    j["mtimeMsUtc"] = v.mtimeMsUtc;
  }

  inline void from_json(const nlohmann::json& j, Highlight_t& v) {
    v.url = j.at("url").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>();
    v.filepath = j.at("filepath").get<std::string>();
    v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>();
  }
  inline std::string to_string(const Highlight_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
