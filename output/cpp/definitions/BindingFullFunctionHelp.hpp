#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
#include "BindingFullArgumentHelp.hpp"
namespace leagueapi {
  // Describes a function.
  struct BindingFullFunctionHelp_t {
    std::vector<BindingFullArgumentHelp_t> arguments;
    std::string async;
    std::string description;
    std::string help;
    std::string name;
    std::string nameSpace;
    BindingFullTypeIdentifier_t returns;
    std::vector<std::string> tags;
    bool threadSafe;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFunctionHelp_t& v) {
    j["arguments"] = v.arguments;
    j["async"] = v.async;
    j["description"] = v.description;
    j["help"] = v.help;
    j["name"] = v.name;
    j["nameSpace"] = v.nameSpace;
    j["returns"] = v.returns;
    j["tags"] = v.tags;
    j["threadSafe"] = v.threadSafe;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFunctionHelp_t& v) {
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp_t>>();
    v.async = j.at("async").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.help = j.at("help").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.returns = j.at("returns").get<BindingFullTypeIdentifier_t>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.threadSafe = j.at("threadSafe").get<bool>();
  }
}
