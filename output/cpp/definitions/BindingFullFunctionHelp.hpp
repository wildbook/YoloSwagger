#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
#include "BindingFullArgumentHelp.hpp"
namespace leagueapi {
  // Describes a function.
  struct BindingFullFunctionHelp_t {
    std::string nameSpace;
    bool threadSafe;
    std::string async;
    std::string help;
    std::vector<std::string> tags;
    std::string description;
    std::string name;
    BindingFullTypeIdentifier_t returns;
    std::vector<BindingFullArgumentHelp_t> arguments;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFunctionHelp_t& v) {
    j["nameSpace"] = v.nameSpace;
    j["threadSafe"] = v.threadSafe;
    j["async"] = v.async;
    j["help"] = v.help;
    j["tags"] = v.tags;
    j["description"] = v.description;
    j["name"] = v.name;
    j["returns"] = v.returns;
    j["arguments"] = v.arguments;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFunctionHelp_t& v) {
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.threadSafe = j.at("threadSafe").get<bool>();
    v.async = j.at("async").get<std::string>();
    v.help = j.at("help").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.returns = j.at("returns").get<BindingFullTypeIdentifier_t>();
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp_t>>();
  }
  inline std::string to_string(const BindingFullFunctionHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
